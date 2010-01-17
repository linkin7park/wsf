

        #ifndef ADB_USERSTOREREADER_H
        #define ADB_USERSTOREREADER_H

       /**
        * adb_UserStoreReader.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: #axisVersion# #today#
        */

       /**
        *  adb_UserStoreReader class
        */

        

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_UserStoreReader adb_UserStoreReader_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_UserStoreReader_t
         * @param env pointer to environment struct
         * @return newly created adb_UserStoreReader_t object
         */
        adb_UserStoreReader_t* AXIS2_CALL
        adb_UserStoreReader_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _UserStoreReader adb_UserStoreReader_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_free (
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

        /**
         * Free adb_UserStoreReader_t object
         * @param  _UserStoreReader adb_UserStoreReader_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_free_obj (
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for allProfileNames. Deprecated for array types, Use adb_UserStoreReader_get_allProfileNames_at instead
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_UserStoreReader_get_allProfileNames(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

        /**
         * Setter for allProfileNames.Deprecated for array types, Use adb_UserStoreReader_set_allProfileNames_at
         * or adb_UserStoreReader_add_allProfileNames instead.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param arg_allProfileNames Array of axis2_char_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_allProfileNames(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_allProfileNames);

        /**
         * Resetter for allProfileNames
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_reset_allProfileNames(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

        
        

        /**
         * Getter for allRoleNames. Deprecated for array types, Use adb_UserStoreReader_get_allRoleNames_at instead
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_UserStoreReader_get_allRoleNames(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

        /**
         * Setter for allRoleNames.Deprecated for array types, Use adb_UserStoreReader_set_allRoleNames_at
         * or adb_UserStoreReader_add_allRoleNames instead.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param arg_allRoleNames Array of axis2_char_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_allRoleNames(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_allRoleNames);

        /**
         * Resetter for allRoleNames
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_reset_allRoleNames(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

        
        

        /**
         * Getter for allUserNames. Deprecated for array types, Use adb_UserStoreReader_get_allUserNames_at instead
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_UserStoreReader_get_allUserNames(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

        /**
         * Setter for allUserNames.Deprecated for array types, Use adb_UserStoreReader_set_allUserNames_at
         * or adb_UserStoreReader_add_allUserNames instead.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param arg_allUserNames Array of axis2_char_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_allUserNames(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_allUserNames);

        /**
         * Resetter for allUserNames
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_reset_allUserNames(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

        
        

        /**
         * Getter for userPropertyNames. Deprecated for array types, Use adb_UserStoreReader_get_userPropertyNames_at instead
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_UserStoreReader_get_userPropertyNames(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

        /**
         * Setter for userPropertyNames.Deprecated for array types, Use adb_UserStoreReader_set_userPropertyNames_at
         * or adb_UserStoreReader_add_userPropertyNames instead.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param arg_userPropertyNames Array of axis2_char_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_userPropertyNames(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_userPropertyNames);

        /**
         * Resetter for userPropertyNames
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_reset_userPropertyNames(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

        
        /****************************** Getters and Setters For Arrays **********************************/
        /************ Array Specific Operations: get_at, set_at, add, remove_at, sizeof *****************/

        /**
         * E.g. use of get_at, set_at, add and sizeof
         *
         * for(i = 0; i < adb_element_sizeof_property(adb_object, env); i ++ )
         * {
         *     // Getting ith value to property_object variable
         *     property_object = adb_element_get_property_at(adb_object, env, i);
         *
         *     // Setting ith value from property_object variable
         *     adb_element_set_property_at(adb_object, env, i, property_object);
         *
         *     // Appending the value to the end of the array from property_object variable
         *     adb_element_add_property(adb_object, env, property_object);
         *
         *     // Removing the ith value from an array
         *     adb_element_remove_property_at(adb_object, env, i);
         *     
         * }
         *
         */

        
        
        /**
         * Get the ith element of allProfileNames.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axis2_char_t* of the array
         */
        axis2_char_t* AXIS2_CALL
        adb_UserStoreReader_get_allProfileNames_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of allProfileNames. (If the ith already exist, it will be replaced)
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_allProfileNames element to set axis2_char_t* to the array
         * @return ith axis2_char_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_allProfileNames_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i,
                const axis2_char_t* arg_allProfileNames);


        /**
         * Add to allProfileNames.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param arg_allProfileNames element to add axis2_char_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_add_allProfileNames(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env,
                const axis2_char_t* arg_allProfileNames);

        /**
         * Get the size of the allProfileNames array.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct.
         * @return the size of the allProfileNames array.
         */
        int AXIS2_CALL
        adb_UserStoreReader_sizeof_allProfileNames(
                    adb_UserStoreReader_t* _UserStoreReader,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of allProfileNames.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_remove_allProfileNames_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of allRoleNames.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axis2_char_t* of the array
         */
        axis2_char_t* AXIS2_CALL
        adb_UserStoreReader_get_allRoleNames_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of allRoleNames. (If the ith already exist, it will be replaced)
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_allRoleNames element to set axis2_char_t* to the array
         * @return ith axis2_char_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_allRoleNames_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i,
                const axis2_char_t* arg_allRoleNames);


        /**
         * Add to allRoleNames.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param arg_allRoleNames element to add axis2_char_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_add_allRoleNames(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env,
                const axis2_char_t* arg_allRoleNames);

        /**
         * Get the size of the allRoleNames array.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct.
         * @return the size of the allRoleNames array.
         */
        int AXIS2_CALL
        adb_UserStoreReader_sizeof_allRoleNames(
                    adb_UserStoreReader_t* _UserStoreReader,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of allRoleNames.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_remove_allRoleNames_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of allUserNames.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axis2_char_t* of the array
         */
        axis2_char_t* AXIS2_CALL
        adb_UserStoreReader_get_allUserNames_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of allUserNames. (If the ith already exist, it will be replaced)
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_allUserNames element to set axis2_char_t* to the array
         * @return ith axis2_char_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_allUserNames_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i,
                const axis2_char_t* arg_allUserNames);


        /**
         * Add to allUserNames.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param arg_allUserNames element to add axis2_char_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_add_allUserNames(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env,
                const axis2_char_t* arg_allUserNames);

        /**
         * Get the size of the allUserNames array.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct.
         * @return the size of the allUserNames array.
         */
        int AXIS2_CALL
        adb_UserStoreReader_sizeof_allUserNames(
                    adb_UserStoreReader_t* _UserStoreReader,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of allUserNames.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_remove_allUserNames_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of userPropertyNames.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith axis2_char_t* of the array
         */
        axis2_char_t* AXIS2_CALL
        adb_UserStoreReader_get_userPropertyNames_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of userPropertyNames. (If the ith already exist, it will be replaced)
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_userPropertyNames element to set axis2_char_t* to the array
         * @return ith axis2_char_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_userPropertyNames_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i,
                const axis2_char_t* arg_userPropertyNames);


        /**
         * Add to userPropertyNames.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param arg_userPropertyNames element to add axis2_char_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_add_userPropertyNames(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env,
                const axis2_char_t* arg_userPropertyNames);

        /**
         * Get the size of the userPropertyNames array.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct.
         * @return the size of the userPropertyNames array.
         */
        int AXIS2_CALL
        adb_UserStoreReader_sizeof_userPropertyNames(
                    adb_UserStoreReader_t* _UserStoreReader,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of userPropertyNames.
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_remove_userPropertyNames_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether allProfileNames is nill
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_UserStoreReader_is_allProfileNames_nil(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env);


        
        /**
         * Set allProfileNames to nill (currently the same as reset)
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_allProfileNames_nil(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env);
        

        /**
         * Check whether allRoleNames is nill
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_UserStoreReader_is_allRoleNames_nil(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env);


        
        /**
         * Set allRoleNames to nill (currently the same as reset)
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_allRoleNames_nil(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env);
        

        /**
         * Check whether allUserNames is nill
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_UserStoreReader_is_allUserNames_nil(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env);


        
        /**
         * Set allUserNames to nill (currently the same as reset)
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_allUserNames_nil(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env);
        

        /**
         * Check whether userPropertyNames is nill
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_UserStoreReader_is_userPropertyNames_nil(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env);


        
        /**
         * Set userPropertyNames to nill (currently the same as reset)
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_userPropertyNames_nil(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env);
        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether allProfileNames is nill at i
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_UserStoreReader_is_allProfileNames_nil_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set allProfileNames to nill at i
         * @param  _UserStoreReader _ adb_UserStoreReader_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_allProfileNames_nil_at(
                adb_UserStoreReader_t* _UserStoreReader, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether allRoleNames is nill at i
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_UserStoreReader_is_allRoleNames_nil_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set allRoleNames to nill at i
         * @param  _UserStoreReader _ adb_UserStoreReader_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_allRoleNames_nil_at(
                adb_UserStoreReader_t* _UserStoreReader, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether allUserNames is nill at i
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_UserStoreReader_is_allUserNames_nil_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set allUserNames to nill at i
         * @param  _UserStoreReader _ adb_UserStoreReader_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_allUserNames_nil_at(
                adb_UserStoreReader_t* _UserStoreReader, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether userPropertyNames is nill at i
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_UserStoreReader_is_userPropertyNames_nil_at(
                adb_UserStoreReader_t* _UserStoreReader,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set userPropertyNames to nill at i
         * @param  _UserStoreReader _ adb_UserStoreReader_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_set_userPropertyNames_nil_at(
                adb_UserStoreReader_t* _UserStoreReader, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_deserialize(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_UserStoreReader_deserialize_obj(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_UserStoreReader_declare_parent_namespaces(
                    adb_UserStoreReader_t* _UserStoreReader,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param UserStoreReader_om_node node to serialize from
         * @param UserStoreReader_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_UserStoreReader_serialize(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env,
            axiom_node_t* UserStoreReader_om_node, axiom_element_t *UserStoreReader_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @param UserStoreReader_om_node node to serialize from
         * @param UserStoreReader_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_UserStoreReader_serialize_obj(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env,
            axiom_node_t* UserStoreReader_om_node, axiom_element_t *UserStoreReader_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_UserStoreReader is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_UserStoreReader_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_UserStoreReader_t
         * @param env pointer to environment struct
         * @param _allProfileNames axutil_array_list_t*
         * @param _allRoleNames axutil_array_list_t*
         * @param _allUserNames axutil_array_list_t*
         * @param _userPropertyNames axutil_array_list_t*
         * @return newly created adb_UserStoreReader_t object
         */
        adb_UserStoreReader_t* AXIS2_CALL
        adb_UserStoreReader_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _allProfileNames,
                axutil_array_list_t* _allRoleNames,
                axutil_array_list_t* _allUserNames,
                axutil_array_list_t* _userPropertyNames);

        


                /**
                 * Free adb_UserStoreReader_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _UserStoreReader adb_UserStoreReader_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axutil_array_list_t* AXIS2_CALL
                adb_UserStoreReader_free_popping_value(
                        adb_UserStoreReader_t* _UserStoreReader,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for allProfileNames by property number (1)
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_UserStoreReader_get_property1(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

    
        

        /**
         * Getter for allRoleNames by property number (2)
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_UserStoreReader_get_property2(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

    
        

        /**
         * Getter for allUserNames by property number (3)
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_UserStoreReader_get_property3(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

    
        

        /**
         * Getter for userPropertyNames by property number (4)
         * @param  _UserStoreReader adb_UserStoreReader_t object
         * @param env pointer to environment struct
         * @return Array of axis2_char_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_UserStoreReader_get_property4(
            adb_UserStoreReader_t* _UserStoreReader,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_USERSTOREREADER_H */
    

