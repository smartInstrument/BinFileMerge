//------------------------------------------------------------------------------
// <auto-generated>
//    此代码是根据模板生成的。
//
//    手动更改此文件可能会导致应用程序中发生异常行为。
//    如果重新生成代码，则将覆盖对此文件的手动更改。
// </auto-generated>
//------------------------------------------------------------------------------

namespace Test2.Models
{
    using System;
    using System.Collections.Generic;
    
    public partial class CONTRACT_INFO
    {
        public CONTRACT_INFO()
        {
            this.COMM_INFO = new HashSet<COMM_INFO>();
        }
    
        public int AUTO_ID { get; set; }
        public string ORDER_ID { get; set; }
        public string CONT_ID { get; set; }
        public string MATER_LIST { get; set; }
        public Nullable<int> PLAN_NUM { get; set; }
        public Nullable<int> CREATE_ID { get; set; }
        public Nullable<System.DateTime> CREATE_DATE { get; set; }
        public Nullable<int> UPDATE_ID { get; set; }
        public Nullable<System.DateTime> UPDATE_DATE { get; set; }
        public Nullable<int> STATUS { get; set; }
    
        public virtual ICollection<COMM_INFO> COMM_INFO { get; set; }
    }
}
