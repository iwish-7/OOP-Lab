#include <iostream>
using namespace std;

class Compressor {
public:
    virtual double compress(double fileSize) { return fileSize; }
};
class TextCompressor : public Compressor {
public:
    double compress(double fileSize) { return fileSize * 0.4; }
};
class ImageCompressor : public Compressor {
public:
    double compress(double fileSize) { return fileSize * 0.7; }
};

int main() {
    double size = 100;
    TextCompressor t;
    ImageCompressor i;
    cout << "Text:  original = " << size << " MB, compressed = " << t.compress(size) << " MB\n";
    cout << "Image: original = " << size << " MB, compressed = " << i.compress(size) << " MB\n";
}
