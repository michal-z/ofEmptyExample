#include "pch.h"
struct Global
{
#include "demo.inl"
};

class Demo : public ofBaseApp
{
    Global::Demo demo = {};

    void setup()
    {
        Global::setup(demo);
    }
    void update()
    {
        Global::update(demo);
    }
    void draw()
    {
        Global::draw(demo);
    }
};

int main()
{
    ofGLWindowSettings settings;
    settings.setGLVersion(4, 5);
    settings.setSize(1920, 1080);
    ofCreateWindow(settings);
    ofRunApp(new Demo());
    return 0;
}
