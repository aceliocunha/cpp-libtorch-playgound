#include <Eigen/Dense>
#include <iostream>

typedef Eigen::Matrix<float, 3, 3> MyMatrix33f;
typedef Eigen::Matrix<float, 3, 1> MyVector3f;
typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> MyMatrix;


int main() {
    {
        MyMatrix33f a;
        MyVector3f v;
        MyMatrix m(10, 15);

        a = MyMatrix33f::Zero();
        std::cout <<"Zero matrix:\n"<< a << std::endl;
        a = MyMatrix33f::Identity();
        std::cout <<"Identity matrix:\n"<< a << std::endl;

        v = MyVector3f::Random();
        std::cout << "Random vector:\n" << v << std::endl;

        a << 1, 2, 3, 4, 5, 6, 7, 8, 9;
        std::cout<<"Iniciando com Matrizes:\n" << a << std::endl;

        a(1,1) = 22;
        std::cout << "Matriz com mudandaça de elemento[0][0]:\n" << a << std::endl;

        int data[] = {1, 2, 3, 4};
        Eigen::Map<Eigen::RowVectorXi> v_map(data, 4);
        std::cout<<"Vetor linha:\n" << v_map << std::endl;
        std::vector<float> vdata = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        Eigen::Map<MyMatrix33f> a_map(vdata.data());
        std::cout << "Matriz mapeada para array:\n" << a_map << std::endl;
    }



    return 0;
};
