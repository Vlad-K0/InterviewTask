//
// Created by Владислав Ковригин on 24.01.2025.
//

#include "Calculate.h"

#include <iostream>
#include <vector>

#include "Tools.h"

void Calculate::CalculateSolution() {
    int arrayNum[6] = {1, 2, 3, 4, 5, 6};
    int solutionCounter = 1;
    int size = sizeof(arrayNum) / sizeof(arrayNum[0]);
    std::vector<std::array<int, 3> > tmpSolution;
    int sumMax = 0;
    int sumMin = 0;
    for (int i = 1; i <= 3; ++i) {
        if (i == 1) {
            sumMax = arrayNum[i - 1] + arrayNum[size - 1] + arrayNum[size - 2];
        }
        for (int j = size; j > (size / 2) + 1; --j) {
            for (int k = size - 1; k > 3; --k) {
                if (j == k || i == j) {
                    continue;
                }
                int tmpSum = i + j + k;
                if (tmpSum == sumMax) {
                    if (i % 2 == 0) {
                        tmpSolution.push_back({i, k, j});
                    } else {
                        tmpSolution.push_back({i, j, k});
                    }
                }
            }
        }
    }

    //ВЫВОД
    for (size_t i = 0; i < tmpSolution.size(); ++i) {
        if (i % 3 == 0) {
            std::cout << "Решение " << solutionCounter << ": ";
            solutionCounter++;
        }
        std::cout << "[";
        for (size_t j = 0; j < 3; ++j) {
            std::cout << tmpSolution[i][j];
        }
        std::cout << "]";
    }
    std::cout << std::endl;

    //МЕНЯЕМ ДВЕ ПОСЛЕДНИХ ЦИФРЫ ДЛЯ НОВОГО РЕШЕНИЯ
    for (auto &subarray: tmpSolution) {
        std::swap(subarray[subarray.size() - 1], subarray[subarray.size() - 2]);
    }

    //ВЫВОД
    for (size_t i = 0; i < tmpSolution.size(); ++i) {
        if (i % 3 == 0) {
            std::cout << "Решение " << solutionCounter << ": ";
            solutionCounter++;
        }
        std::cout << "[";
        for (size_t j = 0; j < 3; ++j) {
            std::cout << tmpSolution[i][j];
        }
        std::cout << "]";
    }
    std::cout << std::endl;

    //очищаем для новой группы решений
    tmpSolution.clear();

    for (int i = 6; i >= 4; --i) {
        if (i == 6) {
            sumMin = arrayNum[size - 1] + arrayNum[0] + arrayNum[1];
        }
        for (int j = 1; j <= (size / 2) - 1; ++j) {
            for (int k = 2; k <= 3; ++k) {
                if (j == k || i == j) {
                    continue;
                }
                int tmpSum = i + j + k;
                if (tmpSum == sumMin) {
                    if (i % 2 == 0) {
                        tmpSolution.push_back({i, k, j});
                    } else {
                        tmpSolution.push_back({i, j, k});
                    }
                }
            }
        }
    }

    //ВЫВОД
    for (size_t i = 0; i < tmpSolution.size(); ++i) {
        if (i % 3 == 0) {
            std::cout << "Решение " << solutionCounter << ": ";
            solutionCounter++;
        }
        std::cout << "[";
        for (size_t j = 0; j < 3; ++j) {
            std::cout << tmpSolution[i][j];
        }
        std::cout << "]";
    }
    std::cout << std::endl;


    //МЕНЯЕМ ДВЕ ПОСЛЕДНИХ ЦИФРЫ ДЛЯ НОВОГО РЕШЕНИЯ
    for (auto &subarray: tmpSolution) {
        std::swap(subarray[subarray.size() - 1], subarray[subarray.size() - 2]);
    }

    //ВЫВОД
    for (size_t i = 0; i < tmpSolution.size(); ++i) {
        if (i % 3 == 0) {
            std::cout << "Решение " << solutionCounter << ": ";
            solutionCounter++;
        }
        std::cout << "[";
        for (size_t j = 0; j < 3; ++j) {
            std::cout << tmpSolution[i][j];
        }
        std::cout << "]";
    }
    std::cout << std::endl;
}
