   int maxx(vector<int>& arr)
    {
        int mx = arr[0];

        for(int i = 1; i < arr.size(); i++)
        {
            if(arr[i] > mx)
                mx = arr[i];
        }

        return mx;
    }

    int summ(vector<int>& arr)
    {
        int sum = 0;

        for(int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
        }

        return sum;
    }

    int countDays(vector<int>& weights, int cap)
    {
        int days = 1;
        int load = 0;

        for(int i = 0; i < weights.size(); i++)
        {
            if(load + weights[i] <= cap)
            {
                load += weights[i];
            }
            else
            {
                days++;
                load = weights[i];
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days)
    {
        int low = maxx(weights);
        int high = summ(weights);

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            int neededDays = countDays(weights, mid);

            if(neededDays <= days)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return low;
    }
