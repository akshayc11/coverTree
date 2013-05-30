/* 
   coverTree
   
   data.h 
   
   Contains the class data for the dataset, and all operations pertaining to the dataset
*/

#ifndef __data_h__
#define __data_h__
#include <string>

namespace coverTree {
  class data {
  private:
    
    FILE* file_pointer_;
    
    float* data_host_;
    float* data_host_transpose_;
    float* data_device_;
    float* data_device_transpose_;
    
    unsigned int dimension_;
    unsigned int number_of_points_;
    string filename_;

    
    
    void         allocate_memory_to_data_host(unsigned int size_in_bytes);
    void         deallocate_memory_to_data_host(void);
    
    void         allocate_memory_to_data_host_transpose(unsigned int size_in_bytes);
    void         deallocate_memory_to_data_host_transpose(void);
    
    void         allocate_memory_to_data_device(unsigned int size_in_bytes);
    void         deallocate_memory_to_data_device(void);
    
    void         allocate_memory_to_data_device_transpose(unsigned int size_in_bytes);
    void         deallocate_memory_to_data_device_transpose(void);
    
    FILE*        get_file_pointer(void);
    void         set_file_pointer(FILE* file_pointer);
    
    unsigned int get_file_size(void);
    
    
    void         load_file_to_data_host(FILE* file_pointer);
    
    void         set_data_host(float* data_host);
    void         transpose_data_host(void);
    void         set_data_device_transpose(float* data_device_transpose);
    
    
  public:
    data();
    ~data();
    
    
    float*       get_data_host(void);
    float*       get_data_device_transpose(void);
    unsigned int get_dimension(void);
    void         set_dimension(unsigned int Dimension);
    unsigned int get_number_of_points(void);
    void         set_number_of_points(unsigned int number_of_points);
    string       get_filename();
    void         set_filename(string filename);
    
  };
}

#endif	/* __data_h__ */
