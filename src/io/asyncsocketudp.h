MVMObject * MVM_io_socket_udp_async(MVMThreadContext *tc, MVMObject *queue,
                                    MVMObject *schedulee, MVMString *host,
                                    MVMint64 port, MVMint64 flags,
                                    MVMString *ssm_host, MVMObject *async_type);
