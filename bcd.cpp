#include"bcd_reference.hpp"
#include"bcd_solution.hpp"


extern "C"
void bcd_reference_c(char **dst, int32_t *src,
			uint32_t size)
{
	//for(int i = 0; i < ITERATIONS; i++) {
		bcd_reference(dst, src, size);
	//}
}
FUNCTION(bcd, bcd_reference_c);


extern "C"
void bcd_solution_c(char **dst, int32_t *src,
			uint32_t size)
{
	//for(int i = 0; i < ITERATIONS; i++) {
		bcd_solution(dst, src, size);
	//}
}
FUNCTION(bcd, bcd_solution_c);
