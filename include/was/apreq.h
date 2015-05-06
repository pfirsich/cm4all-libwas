/*
 * A libapreq2 module for libwas_simple.
 *
 * author: Max Kellermann <mk@cm4all.com>
 */

#ifndef WAS_APREQ_H
#define WAS_APREQ_H

struct apr_pool_t;
struct apreq_handle_t;
struct was_simple;

#ifdef __cplusplus
extern "C" {
#endif

struct apreq_handle_t *
apreq_handle_was(struct apr_pool_t *pool,
                 struct was_simple *was, const char *uri);

#ifdef __cplusplus
}
#endif

#endif
