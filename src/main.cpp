#include "ofMain.h"
#include "testApp.h"
#include "ofAppGlutWindow.h"

//========================================================================
int main( ){
    int w = 800;
    int h = 600;
    ofAppGlutWindow window;
	ofSetupOpenGL(&window, w, h, OF_WINDOW);			// <-------- setup the GL context

	testApp* app = new testApp;

	ofxFenster fenster;
	fenster.init(app);
	fenster.setBounds(0,0,w,h);

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( app );

}
