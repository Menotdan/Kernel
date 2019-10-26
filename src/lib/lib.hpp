#pragma once
#include <stddef.h>
#include <stdint.h>

void *memset(void *, int, size_t);
size_t strlen(const char *);
size_t strnlen(const char *);
size_t strlen(const char16_t *);
size_t strnlen(const char16_t *);
char *itoa(int, char *, int);

template <class InputIt, class OutputIt>
OutputIt copy(InputIt first, InputIt last, OutputIt d_first) {
    while (first != last) {
        *d_first++ = *first++;
    }
    return d_first;
}

template <class InputIt, class OutputIt, class UnaryPredicate>
OutputIt copy_if(InputIt first, InputIt last, OutputIt d_first, UnaryPredicate pred) {
    while (first != last) {
        if (pred(*first)) *d_first++ = *first;
        first++;
    }
    return d_first;
}