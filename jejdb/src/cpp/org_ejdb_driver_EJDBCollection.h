/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_ejdb_driver_EJDBCollection */

#ifndef _Included_org_ejdb_driver_EJDBCollection
#define _Included_org_ejdb_driver_EJDBCollection
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    ensureCollectionDB
 * Signature: (Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_ejdb_driver_EJDBCollection_ensureCollectionDB
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    dropCollectionDB
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_org_ejdb_driver_EJDBCollection_dropCollectionDB
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    loadDB
 * Signature: ([B)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_ejdb_driver_EJDBCollection_loadDB
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    saveDB
 * Signature: ([B)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_ejdb_driver_EJDBCollection_saveDB
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    removeDB
 * Signature: ([B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_ejdb_driver_EJDBCollection_removeDB
  (JNIEnv *, jobject, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
