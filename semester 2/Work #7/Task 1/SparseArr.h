// SparseArr.h
#ifndef SPARSE_ARR_H
#define SPARSE_ARR_H

#include <list>
#include <iostream>
#include <string>

template <class DataT> 
class SAItem {
public:
    SAItem() : index(-1), info(DataT()) {}
    SAItem(long i, DataT d) : index(i), info(d) {}
    long index;
    DataT info;
};

template <class T> 
class SparseArr {
public:
    SparseArr(long len) : length(len) {}
    T& operator[](long ind);
    void Show(const char* title);
private:
    std::list<SAItem<T>> arr;
    long length;
};

template <class T>
void SparseArr<T>::Show(const char* title) {
    std::cout << "===== " << title << " =====\n";
    typename std::list<SAItem<T>>::iterator i = arr.begin();
    typename std::list<SAItem<T>>::iterator n = arr.end();
    for (; i != n; ++i)
        std::cout << i->index << "\t" << i->info << std::endl;
}

template <class T>
T& SparseArr<T>::operator[](long ind) {
    if ((ind < 0) || (ind >= length)) {
        std::cerr << "Error of index: " << ind << std::endl;
        static SAItem<T> temp;
        return temp.info;
    }
    
    typename std::list<SAItem<T>>::iterator i = arr.begin();
    typename std::list<SAItem<T>>::iterator n = arr.end();
    for (; i != n; ++i)
        if (ind == i->index)
            return i->info;
    
    arr.push_back(SAItem<T>(ind, T()));
    i = arr.end();
    return (--i)->info;
}

#endif // SPARSE_ARR_H