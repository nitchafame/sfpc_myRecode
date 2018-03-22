#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    font.load("helvetica.otf", 120, true, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(250);
    string muriel = "MURIEL";
    ofRectangle tbox = font.getStringBoundingBox("MURIEL", 0, 0);

    ofTranslate(ofGetWidth()/2 - tbox.getWidth()/2, ofGetHeight()/2);
    // vector = growable array (dynamic)
    // ofPath -- shape object in OF -- more info polyline
    vector <ofPath > paths = font.getStringAsPoints(muriel);

    for (int i = 0; i < paths.size(); i++){
        
        ofSetColor(255);
        paths[i].draw();
        
        vector < ofPolyline > lines = paths[i].getOutline();
        for (int j = 0; j < lines.size(); j++){
            
            ofPolyline temp = lines[j].getResampledBySpacing(1);
            temp = temp.getSmoothed(5);
            ofSetColor(200,10,10);
            //temp.draw();
            
            ofMesh m;
            m.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
            
            // now, we have a polyline -- let's resample it
            ofSeedRandom(0);
            
            ofSetColor(ofRandom(255));
            ofPolyline newLine;
            for (int k = 0; k < temp.size()+1; k++){
                // look one ahead and one behind.
                // be careful
                int k_p_1 = (k+1) % temp.size();
                int k_m_1 = (k-1);
                if (k_m_1 < 0) k_m_1 += temp.size();
                ofPoint a = temp[k_m_1];
                ofPoint b = temp[k_p_1];
                ofPoint diff = (b-a);
                diff.rotate(90, ofPoint(0,0,1));
                ofPoint newPt = temp[k%temp.size()] + diff.getNormalized() * mouseX;
                //ofLine(temp[k], newPt);
                m.addVertex(temp[k % temp.size()]);
                m.addVertex(newPt);
                m.addColor(ofColor(255,80,40,255));
                m.addColor(ofColor(255,80,40,0));
                
                //newLine.addVertex(newPt);
            }
            m.draw();
            //ofSetColor();
            //newLine.draw();
            
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
