struct Demo
{
};

fn void setup(Demo& demo)
{
    ofDisableAntiAliasing();
    ofSetCircleResolution(16);
}

fn void update(Demo& demo)
{
}

fn void draw(Demo& demo)
{
    ofBackground(0);
    ofSetColor(255);
    ofNoFill();
    ofDrawLine(100.0f, 100.0f, 700.0f, 500.0f);
    ofDrawRectangle(100.0f, 150.0f, 300.0f, 400.0f);
    ofDrawCircle(100.0f, 400.0f, 100.0f);
}
