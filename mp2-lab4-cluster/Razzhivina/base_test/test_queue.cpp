#include "queue.h"
#include <gtest.h>

TEST(Queue, can_create_queue) {
	ASSERT_NO_THROW(Queue <int> tQueue);
}

TEST(Queue, can_create_queue_with_positive_lenght) {
	ASSERT_NO_THROW(Queue <int> tQueue(2));
}

TEST(Queue, cannot_create_queue_with_negative_lenght) {
	ASSERT_ANY_THROW(Queue <int> tQueue(-2));
}

TEST(Queue, cannot_create_queue_with_large_lenght) {
	ASSERT_ANY_THROW(Queue <int> tQueue(MAX_QUEUE_SIZE+1));
}