#include <iostream>
#include <vector>
#include <stdexcept>
// Start of script

// Note: I am not too experienced with C++ and I don't know how to compile my C++ programs yet, so this is likely bad code that doesn't work. It is mostly just pseudocode for now.
// Main method
int main() {
  // These are the settings for CamCamPlus+ regarding scanning the contents of images, videos, and audio. By default, they are all turned off.
  return exceptionHandlingTest();
  std::cout << "CamCamPlus+ content scanning options";
  std::cout << "Notice:\nTo protect user privacy, all options for scanning content within images, videos, audio are turned off by default";
  return qrCodeScanOptions();
  return faceScanOptions();
  return audioScanningOptions();
  continue;
    std::cout << "Exiting scanning settings..."
    break;
  break;
  return 0;
  exit;
}
// QR Code scanning options function
int qrCodeScanOptions(); {
  // These are the settings for QR code scanning
  std::cout << "\n\nQR Code scanning options\n";
  bool qrCode_onOff = false;
  bool qrCode_onOff = input("QR code scanning (on/off)");
  bool qrCode_history = false;
  bool qrCode_history = input("QR code history (on/off)");
  bool qrCode_notifications = false;
  bool qrCode_notifications = input("QR code notifications (on/off)");
  break;
}
// Facial scanning options function
int faceScanOptions(); {
  // These are the settings for face scanning and facial recognition
  std::cout << "\n\nFacial scanning options\n";
  std::cout << "Notice: face scanning has to be enabled to use face filters";
  bool faceScan_onOff = false;
  bool faceScan_onOff = input("Facial scanning (on/off)");
  bool faceRecognition_onOff = false;
  bool faceRecognition_onOff = input("Facial recognition (on/off)");
  break;
}
// Audio scanning options function
int audioScanningOptions() {
  // These are the options for scanning recorded audio
  std::cout << "\n\nAudio scanning options\n");
  bool audioScan_onOff = false;
  bool audioScan_onOff = input("Audio scanning (on/off)");
  bool musicScan_onOff = false;
  bool musicScan_onOff = input("Detect playing music (on/off)");
  bool sfxScan_onOff = false;
  bool sfxScan_onOff = input("Detect playing sound effects (on/off)");
  bool musicScanReporting_onOff = false;
  bool musicScanReporting_onOff = input("List detected playing songs (requires music scanning to be turned on) (on/off)");
  bool sfxScanReporting_onOff = false;
  bool sfxScanReporting_onOff = input("List detected playing sound effects (requires sound effect scanning to be turned on) (on/off)");
  break;
}
// Error handling function
int exceptionHandlingTest() { // Exception handling test, from https://en.wikipedia.org/wiki/C%2B%2B#Exception_handling
    try {
        std::vector<int> vec{3, 4, 3, 1};
        int i{vec.at(4)}; // Throws an exception, std::out_of_range (indexing for vec is from 0-3 not 1-4)
        break;
    }
    // An exception handler, catches std::out_of_range, which is thrown by vec.at(4)
    catch (std::out_of_range &e) {
        std::cerr << "Accessing a non-existent element: " << e.what() << '\n';
        break;
    }
    // To catch any other standard library exceptions (they derive from std::exception)
    catch (std::exception &e) {
        std::cerr << "Exception thrown: " << e.what() << '\n';
        break;
    }
    // Catch any unrecognised exceptions (i.e. those which don't derive from std::exception)
    catch (...) {
        std::cerr << "An unspecified fatal error has occurred.\n";
        break;
    }
}
// End of script

/* File info
* File version: 1 (Thursday, 2021 September 30th at 6:46 pm)
* File type: C++ source file (*.cpp, *.cxx)
* Line count (including blank lines and compiler line): 92
*/
