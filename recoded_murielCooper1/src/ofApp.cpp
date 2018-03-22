#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    font.load("helvetica.otf", 120, true, true, true);
    angle = 0;
    targetAngle = 0;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    angle = 0.8 * angle + 0.2 * targetAngle; //xeno
    
    if (ofGetSeconds() > 30){
        targetAngle = 0;
        
    } else {
        targetAngle = 100;
    }
    
    cout << ofGetSeconds() << "" << angle << "" << targetAngle << endl;
}

ofEasyCam cam;

//--------------------------------------------------------------
void ofApp::draw(){
    
    //Useful function for clock
        //ofGetHours ();
        //ofGetMinute ();
        //ofGetSeconds();
        //ofToString(..);
    
    ofBackground(55, 40, 40);
    float t = ofGetElapsedTimef();
    
    string timeString = ofToString(ofGetHours())+'\n'+
                        ofToString(ofGetMinutes())+'\n'+
                        ofToString(ofGetSeconds());
    
    vector < ofPolyline > lines;
    ofRectangle r = font.getStringBoundingBox(timeString, 0, 0);
    // font.drawString(timeString, ofGetWidth()/2, ofGetHeight()/2);
    
    vector <ofPath> timeCharacters = font.getStringAsPoints(timeString, -r.width/2, r.height/2);
    
    //vector <ofPath> timeCharacters = font.getStringAsPoints(timeString);
   

    for (int i = 0; i < 100; i++){
        float alpha = ofMap(i, 0, 100, 100, 0.001);
        float red = ofMap(i, 0, 100, 255, 50);
        float scaleFactor = ofMap(i, 0, 100, 1, 0.9);
        //float scaleFactor = ofMap(i, 0, 100, 1, -0.05);

        ofSetColor(red, 85, 44, alpha);
        
        ofPushMatrix();
        ofTranslate(ofGetWidth()/2 - 80, ofGetHeight()/2 + 250);
        //ofTranslate(ofGetWidth()/2, ofGetHeight()/2);

        for(int j = 0; j < timeCharacters.size(); j++ ){
            vector < ofPolyline > outlines = timeCharacters[j].getOutline();
            ofScale(scaleFactor , scaleFactor);

            for (int k = 0; k < outlines.size(); k++){
            
                
                //font.drawString( timeString, -r.getWidth() / 2, r.getHeight() / 2 - 400);
                
                ofPolyline temp = outlines[k].getResampledBySpacing(1);
                temp = temp.getSmoothed(angle);
                temp.draw();

            }

        }
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
