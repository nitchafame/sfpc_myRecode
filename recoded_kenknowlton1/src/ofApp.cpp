#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    grabber.initGrabber(1280, 720);
    gridSize = 20;
    //portrait.allocate(500, 500, OF_IMAGE_GRAYSCALE);
   
    
    ofDirectory dir;
    int nFiles = dir.listDir("images");
    for (int i = 0; i < nFiles; i++) {
        string filePath = dir.getPath(i);
        ofImage temp;
        temp.load(filePath);
        temp.resize(20, 20);
        temp.setImageType(OF_IMAGE_GRAYSCALE);
        imgs.push_back(temp);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //img.allocate(500, 500, OF_IMAGE_GRAYSCALE);
    grabber.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);

   // grabber.draw(0,0);
    
    for (int i = 0; i < grabber.getWidth(); i += gridSize){
        for (int j = 0; j < grabber.getHeight(); j += gridSize){
            
            ofColor pixel = grabber.getPixels().getColor(i, j);
//            brightness = pixel.getBrightness();
        
            float b =pixel.getBrightness();
            int index = ofMap(b, 0, 255, 0, imgs.size() - 1);
            
            imgs[index].draw(i, j, gridSize, gridSize);
            
//            for (int k = 0; k < imgs.size(); k++){
//                imgs[k].draw(i,j);
//            }
//        
//            brightness.push_back(row);
//            row.clear();
//        }
//    }
            
//           ofDrawCircle(i, j, 0.03 * b);
            
//            ofPushMatrix();
//                ofTranslate(i, j);
//                ofRotateZ(brightness);
//                ofDrawLine (-5, 0, 5, 0);
//            
//            ofPopMatrix();
            
    
        }
    }
    
//    imgs[5].draw(0,0,100,100); // debugged
    
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
