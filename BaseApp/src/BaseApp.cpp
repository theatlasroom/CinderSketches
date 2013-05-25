#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class BaseApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void BaseApp::setup()
{
}

void BaseApp::mouseDown( MouseEvent event )
{
}

void BaseApp::update()
{
}

void BaseApp::draw()
{
	// clear out the window with black
	gl::clear(Color(0.0f, 0.0f, 0.0f)); 
}

CINDER_APP_BASIC( BaseApp, RendererGl )
