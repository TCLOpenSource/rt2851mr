/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _SHA_SW_H_
#define _SHA_SW_H_

#ifdef __cplusplus
extern "C" {
#endif

#define ATTR_WARN_UNUSED_RESULT __attribute__((warn_unused_result))

/* Block size in bytes of a SHA-256 digest. */
#define SHA256_BLOCK_SIZE 64

/* Size in bytes of a SHA-256 digest. */
#define SHA256_DIGEST_SIZE 32

/* Data structure used for SHA-256. */
typedef struct {
  uint32_t h[8];
  uint32_t tot_len;
  uint32_t len;
  uint8_t block[2 * SHA256_BLOCK_SIZE];
  uint8_t buf[SHA256_DIGEST_SIZE]; /* Used for storing the final digest. */
} SwSHA256Ctx;


/* Initializes the SHA-256 context. */
void SWsha256_init(SwSHA256Ctx* ctx);

/* Updates the SHA-256 context with |len| bytes from |data|. */
void SWsha256_update(SwSHA256Ctx* ctx, const uint8_t* data, uint32_t len);

/* Returns the SHA-256 digest. */
uint8_t* SWsha256_final(SwSHA256Ctx* ctx) ATTR_WARN_UNUSED_RESULT;

#ifdef __cplusplus
}
#endif

#endif /* _SHA_SW_H_ */
