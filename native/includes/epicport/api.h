/*
 * api.h
 *
 *  Created on: 15 нояб. 2013 г.
 *      Author: caiiiycuk
 */

#ifndef API_H_
#define API_H_

extern "C" {

extern bool Epicport_CanSave();
extern bool Epicport_CanLoad();
extern void Epicport_PushSave(const char*);

}


#endif /* API_H_ */
