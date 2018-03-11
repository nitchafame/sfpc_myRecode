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
    
    float time = ofGetElapsedTimef();
    //float spinSpeed = mouseX * .001;
    float offset = ofMap(sin(time), -1, 1, 0, 0.2);
    
    float xOrigin = 400.0;
    float yOrigin = 400.0;
    
    float dotAmount = 100;
    float radiusSize = 150;
    
    for (int i = 0; i < dotAmount; i++){
        for (int j = 0; j < 10; j++){
            
            //float radius = ofMap(sin(time + (i * .2)), -1, 0, 0, 100);
            float radius = ofMap(sin(time + (i + j * offset)), -1, 0, 0, radiusSize);
            
            //float angle = ofGetElapsedTimef();
            //float angle = i * (TWO_PI / 100 * 10) * time * 0.01 ;
            float angle = i * (TWO_PI / dotAmount * 12) * time * 0.01 ;
            
            //cout<<"angle: " <<angle<< endl;
            
            ofPoint pt;
            
            pt.x = xOrigin + radius* cos(angle);
            pt.y = yOrigin + radius* sin(angle);
            
            ofDrawCircle(pt , 1);
            
            //            line.addVertex(pt);
            //            if(line.size() > 2){
            //                line.getVertices().erase(line.getVertices().begin());
            //                line.draw();
            //            }
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
