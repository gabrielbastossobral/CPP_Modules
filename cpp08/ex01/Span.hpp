#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span 
{
	public:
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		int shortestSpan() const;
		int longestSpan() const;
		void addNumber(int number);
		template <typename It>
    	void addNumber(It begin, It end)
		{
       		if (_numbers.size() + std::distance(begin, end) > _maxSize)
            	throw std::runtime_error("Span has not enough space !");
        	_numbers.insert(_numbers.end(), begin, end);
    	}
		
	private:
		std::vector<int> _numbers;
		unsigned int _maxSize;
};

#endif