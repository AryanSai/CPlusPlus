#include<iostream>
#include<filesystem>

using namespace std;

namespace fs= std::filesystem;

int main(){
    fs::create_directory("temp");
}
