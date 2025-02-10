#include <vector>

class Matrix {
public:
  size_t l;
  size_t c;
  double *data;

  Matrix::Matrix(size_t l, size_t c, double *d) : l{l}, c{c}, data{d} {}

  size_t Matrix::get_lines() { return this->l; }
  size_t Matrix::get_columns() { return this->c; }
  double Matrix::get_data_value(size_t li, size_t co) {
    return data[li * this->c + co];
  }
};