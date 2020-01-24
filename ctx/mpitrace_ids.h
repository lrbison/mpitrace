/*----------------------------------------------------------*/
/*    integer IDs for MPI functions                         */
/*----------------------------------------------------------*/
#define COMM_RANK_ID                   0
#define COMM_SIZE_ID                   1
#define SEND_ID                        2
#define SSEND_ID                       3
#define RSEND_ID                       4
#define BSEND_ID                       5
#define ISEND_ID                       6
#define ISSEND_ID                      7
#define IRSEND_ID                      8
#define IBSEND_ID                      9
#define SEND_INIT_ID                  10
#define SSEND_INIT_ID                 11
#define RSEND_INIT_ID                 12
#define BSEND_INIT_ID                 13
#define RECV_INIT_ID                  14
#define RECV_ID                       15
#define IRECV_ID                      16
#define SENDRECV_ID                   17
#define SENDRECV_REPLACE_ID           18
#define BUFFER_ATTACH_ID              19
#define BUFFER_DETACH_ID              20
#define PROBE_ID                      21
#define IPROBE_ID                     22
#define TEST_ID                       23
#define TESTANY_ID                    24
#define TESTALL_ID                    25
#define TESTSOME_ID                   26
#define WAIT_ID                       27
#define WAITANY_ID                    28
#define WAITALL_ID                    29
#define WAITSOME_ID                   30
#define START_ID                      31
#define STARTALL_ID                   32
#define BCAST_ID                      33
#define IBCAST_ID                     34
#define BARRIER_ID                    35
#define IBARRIER_ID                   36
#define REDUCE_ID                     37
#define IREDUCE_ID                    38
#define ALLREDUCE_ID                  39
#define IALLREDUCE_ID                 40
#define REDUCE_SCATTER_ID             41
#define IREDUCE_SCATTER_ID            42
#define REDUCE_SCATTER_BLOCK_ID       43
#define IREDUCE_SCATTER_BLOCK_ID      44
#define GATHER_ID                     45
#define IGATHER_ID                    46
#define GATHERV_ID                    47
#define IGATHERV_ID                   48
#define SCAN_ID                       49
#define ISCAN_ID                      50
#define EXSCAN_ID                     51
#define IEXSCAN_ID                    52
#define ALLGATHER_ID                  53
#define NEIGHBOR_ALLGATHER_ID         54
#define IALLGATHER_ID                 55
#define INEIGHBOR_ALLGATHER_ID        56
#define ALLGATHERV_ID                 57
#define NEIGHBOR_ALLGATHERV_ID        58
#define IALLGATHERV_ID                59
#define INEIGHBOR_ALLGATHERV_ID       60
#define SCATTER_ID                    61
#define ISCATTER_ID                   62
#define SCATTERV_ID                   63
#define ISCATTERV_ID                  64
#define ALLTOALL_ID                   65
#define NEIGHBOR_ALLTOALL_ID          66
#define IALLTOALL_ID                  67
#define INEIGHBOR_ALLTOALL_ID         68
#define ALLTOALLV_ID                  69
#define NEIGHBOR_ALLTOALLV_ID         70
#define IALLTOALLV_ID                 71
#define INEIGHBOR_ALLTOALLV_ID        72
#define ALLTOALLW_ID                  73
#define NEIGHBOR_ALLTOALLW_ID         74
#define IALLTOALLW_ID                 75
#define INEIGHBOR_ALLTOALLW_ID        76
#define ACCUMULATE_ID                 77
#define FETCH_AND_OP_ID               78
#define GET_ID                        79
#define GET_ACCUMULATE_ID             80
#define PUT_ID                        81
#define RACCUMULATE_ID                82
#define RGET_ID                       83
#define RGET_ACCUMULATE_ID            84
#define RPUT_ID                       85
#define WIN_ALLOCATE_ID               86
#define WIN_ALLOCATE_SHARED_ID        87
#define WIN_ATTACH_ID                 88
#define WIN_COMPLETE_ID               89
#define WIN_CREATE_ID                 90
#define WIN_CREATE_DYNAMIC_ID         91
#define WIN_DETACH_ID                 92
#define WIN_FENCE_ID                  93
#define WIN_FLUSH_ID                  94
#define WIN_FLUSH_ALL_ID              95
#define WIN_FLUSH_LOCAL_ID            96
#define WIN_FLUSH_LOCAL_ALL_ID        97
#define WIN_FREE_ID                   98
#define WIN_LOCK_ID                   99
#define WIN_LOCK_ALL_ID              100
#define WIN_POST_ID                  101
#define WIN_START_ID                 102
#define WIN_SYNC_ID                  103
#define WIN_TEST_ID                  104
#define WIN_UNLOCK_ID                105
#define WIN_UNLOCK_ALL_ID            106
#define WIN_WAIT_ID                  107

#define MIN_MPI_IO_ID                108

#define FILE_CLOSE_ID                108
#define FILE_DELETE_ID               109
#define FILE_IREAD_ID                110
#define FILE_IREAD_AT_ID             111
#define FILE_IREAD_SHARED_ID         112
#define FILE_IWRITE_ID               113
#define FILE_IWRITE_AT_ID            114
#define FILE_IWRITE_SHARED_ID        115
#define FILE_OPEN_ID                 116
#define FILE_PREALLOCATE_ID          117
#define FILE_READ_ID                 118
#define FILE_READ_ALL_ID             119
#define FILE_READ_ALL_BEGIN_ID       120
#define FILE_READ_ALL_END_ID         121
#define FILE_READ_AT_ID              122
#define FILE_READ_AT_ALL_ID          123
#define FILE_READ_AT_ALL_BEGIN_ID    124
#define FILE_READ_AT_ALL_END_ID      125
#define FILE_READ_ORDERED_ID         126
#define FILE_READ_ORDERED_BEGIN_ID   127
#define FILE_READ_ORDERED_END_ID     128
#define FILE_READ_SHARED_ID          129
#define FILE_SEEK_ID                 130
#define FILE_SEEK_SHARED_ID          131
#define FILE_SET_VIEW_ID             132
#define FILE_SYNC_ID                 133
#define FILE_WRITE_ID                134
#define FILE_WRITE_ALL_ID            135
#define FILE_WRITE_ALL_BEGIN_ID      136
#define FILE_WRITE_ALL_END_ID        137
#define FILE_WRITE_AT_ID             138
#define FILE_WRITE_AT_ALL_ID         139
#define FILE_WRITE_AT_ALL_BEGIN_ID   140
#define FILE_WRITE_AT_ALL_END_ID     141
#define FILE_WRITE_ORDERED_ID        142
#define FILE_WRITE_ORDERED_BEGIN_ID  143
#define FILE_WRITE_ORDERED_END_ID    144
#define FILE_WRITE_SHARED_ID         145