#include <functional>
#include <string>
#include <iostream>

using namespace std;

int ARRAY_SIZE = 0;
hash<string> hashFunc;
hash<string> hashFunc2;
hash<string> hashFunc3;

size_t hash1(const string& key) {
    return hash<string>{}(key) % ARRAY_SIZE;
}

size_t hash2(const string& key) {
    return (hash<string>{}(key) ^ 0x9e3779b9) % ARRAY_SIZE;
}

size_t hash3(const string& key) {
    return (hash<string>{}(key) >> 5) % ARRAY_SIZE;
}

int main(){

  return 0;
}
