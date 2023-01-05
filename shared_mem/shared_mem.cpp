extern "C"{
	__attribute__((section(".shared"), shared)) int total_dist_fromcpp = 0;
	__attribute__((section(".shared"), shared)) int val_updated_flag = 0;
};
