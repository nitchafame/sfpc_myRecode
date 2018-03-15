#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(25);
    
    float xOrigin = 400;
    float yOrigin = 400;
    float time = ofGetElapsedTimef();
    float w = ofGetWidth();
    
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 20; j++) {
            
        float size = ofMap(sin(time * 0.8), 0, 1, 1500, w * 3);
        float radius = ofMap(sin(i+j * time * .01), 0, 10, 0, size);
        //float radius = ofMap(sin(i+j * time * .01), 0, 10, 0, size);

        float angle = sin(time * 0.05 + i)* TWO_PI;
        
        ofPoint pt;
        
        pt.x = xOrigin + radius * cos (angle);
        pt.y = yOrigin + radius * sin (angle);
        
        ofDrawCircle(pt, 1);
        //ofDrawCircle(pt, 2);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
