#include "ofApp.h"

const char *address = "127.0.0.1";
const int port = 8000;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowTitle("TestSender(cam to main)");
    ofSetFrameRate(60);
    
    /* initialize OSC */
    oscSender.init(address,port);
}

//--------------------------------------------------------------
void ofApp::update(){
    posString = ofToString(pos.x) + ", " + ofToString(pos.y) + ", " + ofToString(pos.z);
    oscSender.sendData(0, 0, pos.x, pos.y, pos.z);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawBitmapString(posString, 100, 100);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch(key){
        case OF_KEY_UP:
            pos.y-=10;
            break;
        case OF_KEY_DOWN:
            pos.y+=10;
            break;
        case OF_KEY_LEFT:
            pos.x-=10;
            break;
        case OF_KEY_RIGHT:
            pos.x+=10;
            break;
        case ' ':
            pos.z+=M_PI/8;
            break;
    }
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
