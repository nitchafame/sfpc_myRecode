#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    font.load("helvetica.otf", 120, true, true, true);
    color.set(ofRandom(255),ofRandom(255),ofRandom(255));
}

    

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(240);
    string m = "MURIEL";
    
    ofRectangle bb = font.getStringBoundingBox("MURIEL", 0, 0);
    for (int i = 0; i < 100; i++) {
        float alpha = ofMap(i, 0, 100, 100, mouseY * 0.01);
        float scaleFactor = ofMap(i, 0, 100, 1, mouseX * 0.01);
        ofSetColor(100, 150, 255, alpha);

        ofPushMatrix();
            ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
            ofScale(scaleFactor, scaleFactor);
            font.drawString("MURIEL", -bb.getWidth() / 2, bb.getHeight() / 2);
        ofPopMatrix();
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
