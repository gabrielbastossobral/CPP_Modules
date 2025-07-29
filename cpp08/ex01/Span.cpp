#include <stdexcept>
#include <algorithm>
#include <limits>
#include <vector>
#include "Span.hpp"

Span::Span(unsigned int n) : _maxSize(n) {}

Span::Span(const Span &other) : _numbers(other._numbers), _maxSize(other._maxSize) {}

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		_numbers = other._numbers;
		_maxSize = other._maxSize;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
	if (_numbers.size() >= _maxSize) {
		throw std::length_error("Span is full");
	}
	_numbers.push_back(number);
}

int Span::shortestSpan() const {
	if (_numbers.size() < 2) {
		throw std::logic_error("Not enough numbers to find a span");
	}
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sorted.size(); ++i) {
		int span = sorted[i] - sorted[i - 1];
		if (span < minSpan) {
			minSpan = span;
		}
	}
	return minSpan;
}

int Span::longestSpan() const {
	if (_numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span");
    }
    std::vector<int>::const_iterator minIt = std::min_element(_numbers.begin(), _numbers.end());
    std::vector<int>::const_iterator maxIt = std::max_element(_numbers.begin(), _numbers.end());
    
    return *maxIt - *minIt;
}
