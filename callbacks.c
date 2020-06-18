// Copyright © 2015-2017 Go Opus Authors (see AUTHORS file)
//
// License for use of this code is detailed in the LICENSE file

// Allocate callback struct in C to ensure it's not managed by the Go GC. This
// plays nice with the CGo rules and avoids any confusion.

// Defined in Go. Uses the same signature as Go, no need for proxy function.
int go_readcallback(void *p, unsigned char *buf, int nbytes);

