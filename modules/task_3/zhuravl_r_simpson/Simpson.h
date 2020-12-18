// Copyright 2020 Zhuravlev Roman
#ifndef MODULES_TASK_3_ZHURAVL_R_SIMPSON_SIMPSON_H_
#define MODULES_TASK_3_ZHURAVL_R_SIMPSON_SIMPSON_H_

#include <mpi.h>

double Sequential_Simpson_double(double (*f)(double x, double y), double a1, double b1,
  double a2, double b2, int n1, int n2);

double Parallel_Simpson_double(double (*f)(double x, double y), double a1, double b1,
  double a2, double b2, int n1, int n2);

double func(double x, double y);

#endif  // MODULES_TASK_3_ZHURAVL_R_SIMPSON_SIMPSON_H_
