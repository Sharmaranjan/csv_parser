extern "C"{
	__declspec(dllexport) __attribute__((section(".shared"), shared)) int total_dist_fromcpp = 0;
	__declspec(dllexport) __attribute__((section(".shared"), shared)) int val_updated_flag = 0;
};
