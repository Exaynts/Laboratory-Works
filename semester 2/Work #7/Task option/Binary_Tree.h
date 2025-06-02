#pragma once
#include "Exceptions.h"
#include "Input.h"
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class BinaryTree {
private:
    vector<T*> tree; // Массив элементов дерева
    size_t capacity; // Вместимость дерева

    // Переход по ветвям дерева (левая подветка, правая подветка, родительская подветка)
    size_t Left(size_t index) { return 2 * index + 1; }
    size_t Right(size_t index) { return 2 * index + 2; }
    size_t parent(size_t index) { return (index - 1) / 2; }

    void Get_Elem(size_t index, vector<T>& result) {
        if (index >= tree.size() or tree[index] == nullptr) 
            return;
        Get_Elem(Left(index), result);
        result.push_back(*tree[index]);
        Get_Elem(Right(index), result);
    }

    // Увеличиваем дерева в 2 раза, если необходимо
    void Capacityx2() {
        if (tree.size() == capacity) {
            capacity *= 2;
            tree.resize(capacity, nullptr);
        }
    }

public:
    // Создание бинарного дерева
    BinaryTree() : capacity(10) {
        tree.resize(capacity, nullptr);
    }

    ~BinaryTree() {
        for (auto ptr : tree) {
            delete ptr;
        }
    }

    // Вставка элемента
    void Insert(const T& value) {
        //cout << "Введите значение, которое хотели бы вставить: ";
        //const T& value = getline(cin);
        // Начинаем с основного корня дерева с индексом 0
        if (tree[0] == nullptr) {
            tree[0] = new T(value);
            return;
        }
        // Находим элемент в дереве
        size_t elem = 0;
        while (elem < tree.size()) {
            if (tree[elem] == nullptr) {
                tree[elem] = new T(value);
                return;
            }

            if (value < *tree[elem]) {
                elem = Left(elem);
            }
            else if (value > *tree[elem]) {
                elem = Right(elem);
            }
            else {
                return;
            }

            Capacityx2();
        }
    }
    // Сожержится ли нужное значение в дереве?
    bool contains(const T& value) {
        size_t elem = 0;
        while (elem < tree.size() and tree[elem] != nullptr) {
            if (value == *tree[elem]) {
                return true;
            }
            else if (value < *tree[elem]) {
                elem = Left(elem);
            }
            else {
                elem = Right(elem);
            }
        }
        return false;
    }
    // Удалить элемент из дерева
    void remove(const T& value) {
        if (tree[0] == nullptr) {
            throw EmptyTreeException();
        }

        size_t elem = 0;
        while (elem < tree.size() and tree[elem] != nullptr) {
            if (value == *tree[elem]) {
                // Узел без подветок
                if (Left(elem) >= tree.size() or (tree[Left(elem)] == nullptr and
    (Right(elem) >= tree.size() or tree[Right(elem)] == nullptr))) {
                    delete tree[elem];
                    tree[elem] = nullptr;
                    return;
                }
                // Узел с одной подветкой
                else if (Left(elem) < tree.size() and tree[Left(elem)] != nullptr and
                    (Right(elem) >= tree.size() or tree[Right(elem)] == nullptr)) {
                    // Если только левая подветка
                    T* temp = tree[Left(elem)];
                    size_t left = Left(elem);
                    size_t right = Right(elem);

                    delete tree[elem];
                    tree[elem] = temp;

                    // Перемещаем поддерево
                    if (left < tree.size()) {
                        tree[left] = nullptr;
                    }
                    if (right < tree.size()) {
                        tree[right] = nullptr;
                    }
                    return;
                }
                else if (Right(elem) < tree.size() and tree[Right(elem)] != nullptr and
                    (Left(elem) >= tree.size() or tree[Left(elem)] == nullptr)) {
                    // Только правая подветка
                    T* temp = tree[Right(elem)];
                    size_t left = Left(elem);
                    size_t right = Right(elem);

                    delete tree[elem];
                    tree[elem] = temp;

                    // Перемещаем поддерево
                    if (left < tree.size()) {
                        tree[left] = nullptr;
                    }
                    if (right < tree.size()) {
                        tree[right] = nullptr;
                    }
                    return;
                }
                else {
                    // Узел с двумя ветками
                    // Находим минимальный элемент в правом поддереве
                    size_t minelem = Right(elem);
                    while (Left(minelem) < tree.size() and tree[Left(minelem)] != nullptr) {
                        minelem = Left(minelem);
                    }

                    // Копируем полученное значение
                    *tree[elem] = *tree[minelem];

                    // Удаляем минимальный элемент
                    delete tree[minelem];
                    tree[minelem] = nullptr;
                    return;
                }
            }
            else if (value < *tree[elem]) {
                elem = Left(elem);
            }
            else {
                elem = Right(elem);
            }
        }

        throw ElementNotFoundException();
    }

    // Получить массив из всех элементов дерева
    vector<T> Get_All_Elem() {
        vector<T> result;
        Get_Elem(0, result);
        return result;
    }
    // Проверка на пустоту
    bool isEmpty() {
        return tree[0] == nullptr;
    }
};

