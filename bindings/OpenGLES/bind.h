/*
 * glesbind.h
 *
 */

#ifndef GLESBIND_H_
#define GLESBIND_H_

#include <v8.h>
#include "../../utils.h"
#include "../../imageloader.h"

class GlesFactory {
public:
	static v8::Handle<v8::ObjectTemplate> createGles(void);
	static v8::Persistent<v8::Context> gles_persistent_context;
	static v8::Persistent<v8::Object> self_;
};

#endif /* GLESBIND_H_ */
