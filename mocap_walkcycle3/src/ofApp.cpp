#include "ofApp.h"
#include "data.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    
    //----------------------------------------------------------------
    // the data is stored in a big flat array, let's copy it into something more managable
    // don't have to touch this :)
    
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 24; j++){
            float x = data3d[ i * 24 * 3  + j * 3 + 0 ];
            float y = data3d[ i * 24 * 3  + j * 3 + 1 ];
            float z = data3d[ i * 24 * 3  + j * 3 + 2 ];
            frames[i][j].set(x,y,z);
        }
    }
    
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 24; j++){
            float x = data2d[ i * 24 * 2  + j * 2 + 0 ];
            float y = data2d[ i * 24 * 2  + j * 2 + 1 ];
            frames2d[i][j].set(x,y);
            
        }
    }
    
    offsets.push_back(ofVec3f(ofRandom(0, 1000), ofRandom(0, 1000), ofRandom(0, 1000)));
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    // you don't have to touch this either:)
    //----------------------------- copy data into array
    ofPoint data3d[24];
    //ofPoint data2d[24];
    
    int frameNumber =(int)(ofGetFrameNum()*0.4) % 30;
    for (int i = 0; i < 24; i++){
        data3d[i] = frames[ frameNumber][i];
        //data2d[i] = frames2d[frameNumber][i];
    }
    
    
    // end do not touch
    
    
    //----------------------------- 3d
    cam.begin();
    cam.enableOrtho();
    ofSetLineWidth(4);
    ofSetColor(255);
    float time = ofGetElapsedTimef();
    
    ofMesh mesh; //Great for triangle,
    mesh.setMode(OF_PRIMITIVE_LINE_STRIP);
    mesh.enableIndices();
    
    
    for (int i = 0; i < 24; i++){
        
        
        ofVec3f timeOffsets = offsets[i];
        
        float x = data3d[i].x;
        float y = data3d[i].y;
        float z = data3d[i].z;
        
        y += ofSignedNoise( x * 0.01, y, time) * ofMap(sin(time + timeOffsets.y), -1, 1, 0, 5 + 0.5) * 10;
        
        ofVec3f pos(x + 5, y, z);
        //mesh.addVertex(ofPoint(data3d[i].x, data3d[i].y, data3d[i].z));
        
        mesh.addVertex(ofPoint(data3d[i].x, data3d[i].y));
       
        
        mesh.addColor(ofColor::yellow);
        mesh.addColor(ofColor::yellow);
        //mesh.addColor(ofColor::tomato);

        
        mesh.addVertex(pos - .5);
        mesh.draw();
        
        
    }
    
    cam.end();
    
    
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
