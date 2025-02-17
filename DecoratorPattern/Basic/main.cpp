#include <iostream>
using namespace std;

class Window // Component
{
public:
    virtual void draw() = 0;
    virtual ~Window() = default;
};

class SimpleWindow : public Window // Concrete Component
{
public:
    void draw() override
    {
        cout << "Drawing SimpleWindow()" << endl;
    }
};

class WindowDecorator : public Window // Decorator
{
public:
    WindowDecorator(Window *window) : window_(window) {}

    void draw() override
    {
        window_->draw(); // Delegate to the component
    }

protected:
    Window *window_;
};

class ScrollbarWindow : public WindowDecorator // Concrete Decorator
{
public:
    ScrollbarWindow(Window *window) : WindowDecorator(window) {}

    void draw() override
    {
        WindowDecorator ::draw(); // Draw the window
        drawScrollbar();          // Add scrollbar
    }

private:
    void drawScrollbar()
    {
        cout << "Drawing ScrollbarWindow()" << endl;
    }
};

int main()
{
    cout << "Concrete Component:\n";
    Window *simpleWindow = new SimpleWindow();
    simpleWindow->draw();
    cout << "\nDecorator or Wrapper object:\n";
    Window *simpleWindow2 = new SimpleWindow();
    Window *scrollbar = new ScrollbarWindow(simpleWindow2);
    scrollbar->draw();
}