#pragma once
#include <sys/timeb.h>
#include <time.h>
#include < stdio.h >
#include < stdlib.h >
#include < vcclr.h >
#include "stdafx.h"


namespace SportTimerClient {

	public class FinishedLaps {
	public: char* competitorId;
			int numberOfLaps;
			FinishedLaps(char* finisherId) {
				numberOfLaps = 1;
				competitorId = finisherId;
			}
	};
}