#include <iostream>

using namespace std;

// Abstract class or Interface
class Image
{
public:
    virtual void display() const = 0;
    virtual ~Image() = default;
};

// Actual Subject
class RealImage : public Image
{
private:
    string fileName;
    void load() const
    {
        cout << "Loading image: " << fileName << endl;
    }

public:
    RealImage(const string &filename) : fileName(filename)
    {
        load();
    }
    void display() const override
    {
        cout << "Displaying image: " << fileName << endl;
    }
};

// Proxy Subject
class ProxyImage : public Image
{
public:
    string fileName;
    mutable RealImage *realImage;

public:
    ProxyImage(const string &filename) : fileName(filename), realImage(nullptr) {}

    ~ProxyImage()
    {
        delete realImage;
    }

    void display() const override
    {
        if (realImage == nullptr)
        {
            // Lazy initialization
            realImage = new RealImage(fileName);
        }
        realImage->display();
    }
};

int main()
{
    ProxyImage proxy("dogs.png");
    proxy.display();
}