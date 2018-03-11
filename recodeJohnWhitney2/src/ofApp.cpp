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
    float offset = ofMap(sin(time), -1, 1, 0, 0.01);
    
    float dotAmount = 100;
    float radiusSize = 60;
    
    for (int i = 0; i < dotAmount; i++){
        
            //float radius = ofMap(sin(time + (i* offset)), -1, 0, 0, radiusSize);
            float radius = ofMap(sin(time * 0.05 + (i* offset)), -1, 0, 0, radiusSize);
            
            float angle = i * sin(time * 0.1);
        
            
            ofPoint pt;
            
            pt.x = sin(radius) * 400 +400;
            pt.y = ofGetHeight()/2 + radius* sin(angle);
            
            ofDrawCircle(pt , 1.5);
            
//                        line.addVertex(pt);
//                        if(line.size() > 2){
//                            line.getVertices().erase(line.getVertices().begin());
//                            line.draw();
//                        }
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
