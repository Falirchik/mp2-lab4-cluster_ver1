#include "job.h"
#include <gtest.h>

TEST(Job, can_create_job) {
	ASSERT_NO_THROW(Job tJob);
}

TEST(Job, can_create_job_with_initial_conditions) {
	ASSERT_NO_THROW(Job tJob(101,1);
}

TEST(Job, cannot_create_job_with_negative_tact_number){
	ASSERT_ANY_THROW(Job tJob(1001,-1));
}