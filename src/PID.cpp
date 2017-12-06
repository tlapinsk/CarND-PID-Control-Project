#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	p = Kp;
	i = Ki;
	d = Kd;

	i_error  = 0;
	prev_cte = 0;
}

void PID::UpdateError(double cte) {
	p_error = cte;
	i_error += cte;
	d_error = cte - prev_cte;

	prev_cte = cte;
}

double PID::TotalError() {
	double total_error = -p * p_error - i * i_error - d * d_error;

	return total_error;
}