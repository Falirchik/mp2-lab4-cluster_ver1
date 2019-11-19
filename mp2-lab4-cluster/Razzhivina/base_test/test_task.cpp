#include "Task.h"
#include <gtest.h>

TEST(Task, can_create_task) {
	ASSERT_NO_THROW(Task tTask);
}

TEST(Task, can_create_task_with_initial_conditions) {
	ASSERT_NO_THROW(Task tTask(101);
}

//TEST(Task, cannot_create_Task_with_negative_time){
//	ASSERT_ANY_THROW(Task tTask(101,1,-1));
//}
//
//TEST(Task, cannot_create_Task_with_negative_CPU) {
//	ASSERT_ANY_THROW(Task tTask(101, -1, 1));
//}

