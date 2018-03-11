#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(245);
    ofSetColor(0);
    ofSeedRandom(0);
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    for (int i = 0; i < 60; i++){
        for (int j = 0; j < 24; j++){
            float t = ofGetElapsedTimef();
            //randomAngles[i] = ofRandom(130, 150);
            randomAngles[i] = ofRandom(130, t * 20);
            
            ofPushMatrix();
            //ofTranslate(i*17+55, j*20+20);
            
            ofTranslate(i*17+25, j*20+25);
            ofRotateZ(randomAngles[i]);
            
            //            // experiment 1 devide Left and Right
            //            float xMapNumRight = 0;
            //            float xMapNumLeft = 0;
            //
            //            xMapNumRight = ofMap(i, 0, 29, 0, 1, true);
            //            xMapNumRight = powf(xMapNumRight, 1.7);
            //            xMapNumRight = ofMap(xMapNumRight, 0, 1, 1, 12);
            //
            //            xMapNumLeft = ofMap(i, 30, 60, 1, 0, true);
            //            xMapNumLeft = powf(xMapNumLeft, 1.7);
            //            xMapNumLeft = ofMap(xMapNumLeft, 1, 0, 12, 1);
            //
            //            float lineWidth; //***
            //
            //            if (i < 30){
            //                lineWidth = xMapNumRight; //***
            //                ofSetLineWidth(xMapNumRight);
            //            } else if (i >= 30){
            //                lineWidth = xMapNumLeft; //***
            //                ofSetLineWidth(xMapNumLeft);
            //            }
            
            
            // experiment 2
            //            float midPoint = 30;
            //            midPoint = powf(midPoint, 1.7);
            //
            //            float mapN = ofMap(i, 0, 60, -30, 30, true);
            //            float lineWidth;
            //
            //            if (i < midPoint){
            //                lineWidth = 30 - abs(i-30);
            //            }
            
            //
            float mapN = 0;
            mapN = ofMap(i , 0, 60, -1, 1);
            mapN = abs(mapN); // positive
            mapN = 1-mapN;
            mapN = powf(mapN, 3.5);
            mapN = ofMap(mapN, 0, 1, 1, 12);
            
            float lineWidth;
            lineWidth = mapN;
            
            
            // capsule shape
            ofDrawRectangle(0, 0, 35, lineWidth);
            ofDrawCircle(35/2.0, 0, lineWidth/2.0); // reference from rect: w/2,0,h/2
            ofDrawCircle(-35/2.0, 0, lineWidth/2.0); // reference from rect: -w/2,0,h/2
            
            
            //            ofDrawLine(0+10, 10, 0+45, 20);
            
            ofPopMatrix();
            
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
