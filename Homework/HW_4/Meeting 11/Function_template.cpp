#include <iostream>


using namespace std;



template<class T> T max(const T* data, int size) {
    T result = data[0];
    for(int i = 1 ; i < size ; i++)
      if(result < data[i])
        result = data[i];
    return result;
  }

template<class T> T min(const T* data, int size) {
    T result = data[0];
    for(int i = 1 ; i < size ; i++)
      if(result > data[i])
        result = data[i];
    return result;
  }
