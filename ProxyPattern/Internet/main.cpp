#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

// Abstract class or Interface
class Internet
{
public:
    virtual void connectTo(const string &serverHost) const = 0;
    virtual ~Internet() = default;
};

// Real Internet Class
class RealInternet : public Internet
{
public:
    void connectTo(const string &serverHost) const override
    {
        cout << "Connecting to " << serverHost << endl;
    }
};

// Proxy Internet Class
class ProxyInternet : public Internet
{
private:
    RealInternet *realInternet;
    static vector<string> bannedSites;

public:
    ProxyInternet() : realInternet(new RealInternet()) {}

    void connectTo(const string &serverHost) const override
    {
        string lowerServerHost = serverHost;
        transform(lowerServerHost.begin(), lowerServerHost.end(), lowerServerHost.begin(), ::tolower);

        if (find(bannedSites.begin(), bannedSites.end(), lowerServerHost) != bannedSites.end())
        {
            throw runtime_error("Access Denied to " + serverHost);
        }
    }
};

// Initializing static banned sites
vector<string> ProxyInternet::bannedSites = {"abc.com", "xyz.com", "banned.com"};

// Main Function
template <typename T>
void attemptConnection(T &internet, const string &site)
{
    try
    {
        internet.connectTo(site);
        cout << "Successfully connected to " << site << "!" << endl;
    }
    catch (const exception &e)
    {
        cout << e.what() << endl;
    }
}

int main()
{
    ProxyInternet internet;
    attemptConnection(internet, "example.com");
    attemptConnection(internet, "abc.com"); // This site is banned.
    attemptConnection(internet, "stackoverflow.com");
}