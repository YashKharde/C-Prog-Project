void max(float* p) {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (p[i] > p[j]) {
				float temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	}
