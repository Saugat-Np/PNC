# THIS IS HOW THE TABLE IS MADE , 
```
```
**HTML CODE**

<table border="1"  >
    <thead>
        <tr>
            <th>name</th>
            <th>class</th>
            <th>roll</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td colspan="3">saugat</td>
        </tr>
        <tr>
            <td>salin</td>
            <td rowspan="3">2</td>
            <td>19</td>
        </tr>
        <tr>
            <td>saubhagya</td>
            <td>27</td>
        </tr>
        <tr>
            <td>samyog</td>
            <td>19</td>
        </tr>
    </tbody>
</table>
```

**CSS CODE**

```

table{
    width: 50%;
    text-align: center;
    margin: 30px auto;
    background-color: lightyellow;    
    border:4px solid blue;
}
table thead{
    background: lightcoral;
    color: white;
}

```


# THIS IS HOW THE IMAGE MAPPING IS DONE IN HTML

```
<img src="https://en.setopati.com/uploads/posts/725X460/oli-Deuba-Dahal1683618680.jpg" alt="image of oli ,deuba, dahal" usemap="#netaharu" >
<map name="netaharu">
    <area shape="circle" coords="120,130,80" href="https://en.wikipedia.org/wiki/Sher_Bahadur_Deuba" alt="deuba">
    <area shape="circle" coords="350,130,80" href="https://en.wikipedia.org/wiki/Pushpa_Kamal_Dahal" alt="deuba">
    <area shape="circle" coords="600,130,80" href="https://en.wikipedia.org/wiki/K._P._Sharma_Oli" alt="deuba">
</map>

```