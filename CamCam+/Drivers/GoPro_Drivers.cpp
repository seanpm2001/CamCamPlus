#include <iostream>
#include <vector>
#include <stdexcept>
// Start of script

int main() {
  // Drivers for the GoPro series of camera
}
int Mode() {
  bool laptopMode = false;
  bool desktopMode = false;
  bool tabletMode = false;
  bool phoneMode = false;
  bool cameraMode = true;
}
int microphone() {
  bool microphoneSupport = true;
  bool microphoneExternal = false;
  bool microphoneInternal = true;
}
int models() {
  // GoPro Hero model support
  bool goPro_Hero = true;
  bool goPro_Hero2 = true;
  bool goPro_Hero3 = true;
  bool goPro_Hero3Plus = true;
  bool goPro_Hero4 = true;
  bool goPro_Hero7 = true;
  // GoPro Karma model support
  bool goPro_Karma = false;
}
int resolution() {
  // GoPro Hero resolution
  // Hero 1
  int goProH1_x = 1280; // X axis of GoPro Hero 1
  int goProH1_y = 720; // Y axis of GoPro Hero 1
  // Hero 2
  int goProH2_x = 1920;  // X axis of GoPro Hero 2
  int goProH2_y = 1080;  // Y axis of GoPro Hero 2
  // Hero 3
  int goProH3_x = 1920;  // X axis of GoPro Hero 3
  int goProH3_y = 1080;  // Y axis of GoPro Hero 3
  // Hero 3 Plus
  int goProH3p_x = 1920;  // X axis of GoPro Hero 3+
  int goProH3p_y = 1080;  // Y axis of GoPro Hero 3+
  // Hero 4
  int goProH4_x = 1920;  // X axis of GoPro Hero 4
  int goProH4_y = 1080;  // Y axis of GoPro Hero 4
  // Hero 7
  int goProH7_x = 1920;  // X axis of GoPro Hero 7
  int goProH7_y = 1080;  // Y axis of GoPro Hero 7
}
int gramerate() {
  // GoPro frame per second
  // Hero 1
  int goProH1_fps = 30; // Framerate (FPS) of GoPro Hero 1
  // Hero 2
  int goProH2_fps = 30; // Framerate (FPS) of GoPro Hero 2
  // Hero 3
  int goProH3_fps = 30; // Framerate (FPS) of GoPro Hero 3
  // Hero 3+
  int goProH3p_fps = 60; // Framerate (FPS) of GoPro Hero 3+
  // Hero 4
  int goProH4_fps = 60; // Framerate (FPS) of GoPro Hero 4
  // Hero 7
  int goProH4_fps = 60; // Framerate (FPS) of GoPro Hero 7
}
int bitDepth() {
  // GoPro camera bit depth
  // Hero 1
  int goProH1_bitd = 24; // Bit depth of GoPro Hero 1
  // Hero 2
  int goProH2_bitd = 24; // Bit depth of GoPro Hero 2
  // Hero 3
  int goProH3_bitd = 24; // Bit depth of GoPro Hero 3
  // Hero 3+
  int goProH3p_bitd = 24; // Bit depth of GoPro Hero 3+
  // Hero 4
  int goProH4_bitd = 24; // Bit depth of GoPro Hero 4
  // Hero 7
  int goProH7_bitd = 24; // Bit depth of GoPro Hero 7
}
int fileFormat() {
  // File format compatibility for GoPro Hero 1
  int goProH1_fformat = "*.mp4"; // Default file format for GoPro Hero 1
  // File format compatibility for GoPro Hero 2
  int goProH2_fformat = "*.mp4"; // Default file format for GoPro Hero 2
  // File format compatibility for GoPro Hero 3
  int goProH3_fformat = "*.mp4"; // Default file format for GoPro Hero 3
  // File format compatibility for GoPro Hero 3+
  int goProH3p_fformat = "*.mp4"; // Default file format for GoPro Hero 3+
  // File format compatibility for GoPro Hero 4
  int goProH4_fformat = "*.mp4"; // Default file format for GoPro Hero 4
  // File format compatibility for GoPro Hero 7
  int goProH7_fformat = "*.mp4"; // Default file format for GoPro Hero 7
}
int exceptionHandlingTest() { // Exception handling test, from https://en.wikipedia.org/wiki/C%2B%2B#Exception_handling
    try {
        std::vector<int> vec{3, 4, 3, 1};
        int i{vec.at(4)}; // Throws an exception, std::out_of_range (indexing for vec is from 0-3 not 1-4)
    }
    // An exception handler, catches std::out_of_range, which is thrown by vec.at(4)
    catch (std::out_of_range &e) {
        std::cerr << "Accessing a non-existent element: " << e.what() << '\n';
    }
    // To catch any other standard library exceptions (they derive from std::exception)
    catch (std::exception &e) {
        std::cerr << "Exception thrown: " << e.what() << '\n';
    }
    // Catch any unrecognised exceptions (i.e. those which don't derive from std::exception)
    catch (...) {
        std::cerr << "Some fatal error\n";
    }
}
// End of script
/* File info
* File version: 1 (Tuesday, November 4th 2020 at 11:04 am)
* File type: C++ Script source file (*.cpp)
* Line count (including blank lines and compiler line): 121
*/
