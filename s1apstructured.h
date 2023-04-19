#ifndef S1AP_STRUCTURED_H
#define S1AP_STRUCTURED_H

// Converts arbitrary unstructured bytes into a structured S1AP message.
// Returns a the length of the structured bytes written to `buf_out`, or
// a negative error code on failure.
extern "C" long s1ap_arbitrary_to_structured(char *buf_in, long in_len, char *buf_out, long out_max);

// Determines the length of the message in the given buffer.
// Useful for determining if multiple messages are in a buffer.
// Returns a negative value on failure.
extern "C" long s1ap_msg_len(char *buf_in, long in_len);

// Derives a unique response code from the given S1AP message.
// Returns 0 if `in_len` is less than 0, or if the S1AP message could not be parsed.
// Note that this method can also return a unique request code from a given S1AP message.
extern "C" unsigned int s1ap_response_code(char *buf_in, long in_len);

#endif
